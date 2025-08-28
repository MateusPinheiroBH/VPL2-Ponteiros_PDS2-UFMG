// Oi! Esse e os próximos projetos de PDS2 estão no meu github -> https://github.com/MateusPinheiroBH

#include <iostream>
#include <string>
#include <iomanip>// biblioteca usada para setar a precis�o das casas decimais
using namespace std;

struct usuario { // item 1 - struct pessoa
	string nome;
	int idade;
	float salario;
};
void TrueOrFalse(bool input) { // item 2 - fun��o que imprime true/false
	if (input == true) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}
bool ComparaPonteiros(usuario* info01, usuario* info02) { // item 3 - fun��o que compara strings da struct usuario
	if (info01 == info02) {
		return true;
	}
	else {
		return false;
	}
}

float SomaDados(float* &info01, float info02) { // item 4 - fun��o de aumento de sal�rio
	*info01 += (*info01 * info02);
	return *info01;
}

int main() {
	
	usuario user01;//declara��o de struct do tipo usu�rio	}
	cin >> user01.nome; //				input de nome		}
	cin >> user01.idade; //				input de idade		} item 5
	cin >> user01.salario; // 			input de salario	}
	
	usuario* p1 = &user01; // }
	usuario* p2 = &user01; // } item 6
	
	string* p3; // item 7
	
	float* p4; // item 8

	cout << "p1->nome =" << p1 -> nome << endl; // item 9
	cout << "(*p2).idade =" << (*p2).idade << endl; // item 10
	
	bool item11 = ComparaPonteiros(p1, p2);// item 11
	TrueOrFalse(item11);// item 11
	
	cin >> p2 -> salario;//																			}
	cout << fixed << setprecision(2);//																} item 12
	cout << "Novo salario " << p1 -> nome << " " << p1 -> idade << " " << p1 -> salario << endl;//	}
	
	p2 = p1;// item 13
	
	cin >> p1 -> idade;// item 14
	
	cout << "nova idade atrav�s de p2 -> " << p2 -> idade << endl;// item 15
	
	cout << "Comparando p1 == p2: ";//			}
	bool item16 = ComparaPonteiros(p1, p2);// 	} item 16
	TrueOrFalse(item16);//						}
	
	usuario user02;// declara��o de uma struct do tipo usuario - item 17
	user02.nome = "VPL2";//		}
	user02.idade = 1;//			} item 17
	user02.salario = 5.0;//		}
	
	p1 = &user02;// item 18
	
	cout << "Comparando p1 == p2: ";//			}
	bool item19 = ComparaPonteiros(p1, p2);// 	} item 19
	TrueOrFalse(item19);//						}
	
	cout << "Imprimindo os nomes para verificar desigualdade" << endl;//	}
	cout << p1 -> nome << endl;//											} item 20
	cout << p2 -> nome << endl;//											}
	
	p3 = &user02.nome;// item 21
	
	cout << "Imprimindo o conteudo de p3 " << *p3 << endl;// item 22
	
	cin >> *p3;// item 23
	
	cout << "Imprimindo atraves de p1 o nome alterado por p3 " << p1 -> nome << endl;// item 24
	
	p4 = &user02.salario;//	}
	cout << *p4 << endl;//	} item 25
	
	float item26;//		}
	cin >> item26;//	} item 26
	
	float item27 = SomaDados(p4, item26);//		}
	cout << item27 << endl;//					} item 27
	
	return 0;
	
}
