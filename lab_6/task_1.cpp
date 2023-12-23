// 1 - Запись текста в файл.cpp 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ofstream out("test", ios::out | ios::binary); //открываем файл

    if (!out.is_open()) {
        cout << "Файл открыть невозможно\n" << endl;
        return 1;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            string poem;
            getline(cin, poem);
            out << poem;
            out << "\n";
        }
    }
    
    out.close(); //закрытие потока

}