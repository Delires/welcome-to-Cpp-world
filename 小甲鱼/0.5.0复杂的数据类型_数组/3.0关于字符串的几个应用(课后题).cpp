/**
����C++���ַ���string������ʵ�����µ�һЩ����Ķ���
     �ַ�����ֱ����string����
     Ҫ��ͷ�ļ�"string"
     ֱ�Ӹ�����string str("xxx");  xxx�Ǹ�ֵ������

1.��ȡ���ַ����� str.substr(5);��ȡ�ַ���������ַ�һֱ�������� �ַ���Ԫ�ش�0��ʼ
                  str.substr(5��3);��ȡ�ַ���������ַ������3��
2.�Ƚ��ַ���������ȡ���������ַ�������ֵ������ַ����ȽϾ�����
3.����ַ�����str.append(temp) ���ַ���temp��Ӹ��ַ���str
4.�����ַ�����str.find(temp) ����str�ַ�������û��temp
**/
#include "iostream" //�����������/���������
#include "string"

using namespace std;

int main(void)
{
    string str("I love meng di. I want to became a strong man");
    string str_1, str_2, str_3;


/******************** ��ȡ���ַ���str.substr ********************/
    cout<< "��ȡ�ַ�������:" << endl;
    str_1 = str.substr(0,6); //�ַ���Ԫ�ش�0��ʼ. ��ȡ6����
    str_2 = str.substr(7,4); //from 7th character, abstract 4 characters.
    cout<< str_1 << endl;
    cout<< str_2 << endl;
    cout<< "\n\n" << endl;


/******************** �Ƚ��ַ����� ֱ�Ӱ���ȡ���ַ����Ƚϼ���********************/
//�ַ����ıȽ�������Ƚ�ASCII�룬��˳���ĸ��ȴ��ֱ��ʤ����Ҫÿ���ַ�ascii��һ����ͱȳ���
    cout<< "�Ƚ��ַ�������:" << endl;
    if(str_1 > str_2)
    {
        cout<< str_1 <<">" << str_2<< endl;
    }
    else
    {
        cout<< str_1 <<"<" << str_2<< endl;
    }
    cout<< "\n\n" << endl;


/********************����ַ�����str.append(temp) ���ַ���temp��Ӹ��ַ���str**********/
// cin.getline(m,5);  ����5���ַ���m�У��������һ��Ϊ'\0'������ֻ����4���ַ����.
//cin.getline() �� getline()�ǲ�ͬ��
    cout<< "����ַ�������:" << endl;
 //��������һ���ַ���
    char str_add[100] = "\n";
    cin.getline(str_add, 100); //����100�������str_add���ո�Ҳ�С�����100�������������ʾ���ٸ�
    cout<< "��ӵ��ַ���Ϊ��"<<str_add << endl;
    cout<< "��Ӻ���ַ���Ϊ��"<<str.append(str_add)<<endl;
    cout<< "\n\n" << endl;


/********************�����ַ�����str.find(temp) ����str�ַ�������û��temp, û�ҵ���������-1(string::npos),�ҵ������ַ�����Ԫ�ص�λ�� **********/
//��getline(cin, str)������ַ���
    cout<< "�����ַ�������:" << endl;
    cout<< "������Ҫ���ص��ַ���:" << endl;
    string str_sear;

    //str="\n";//�����ʹ��cin.getline����getline()Ҫ������䣬���س�����Ϊ������cin��������棬������������Ļ����ڿ���̨�ϾͲ������getline()��������ʾ����ֱ����������Ϊ����Ĭ�ϵؽ�֮ǰ�ı�����Ϊ��������
    //getline(cin,mystr);

    getline(cin, str_sear);
    cout<< str_sear<<endl;
    int num;
    if( str.find(str_sear) != string::npos)
    {
        cout << "�ַ�������,������ĵ�" << str.find(str_sear)<< "Ԫ�ؿ�ʼ" << endl;
    }
    else
    {
        cout << "�ַ���������" << endl;
    }
    cout<< "\n\n" << endl;


//��ֹ��exe���У�����һ������
    cout << "���������ַ���������"<<endl;
    cin.get();
    return 0;

}

/**
string str
1.��ȡ�ַ���str.substr(a,b); //���ַ���str�ĵ�a��Ԫ�ؿ�ʼ��ȡb��Ԫ��
2.�Ƚ��ַ���������ֱ�ӱȡ��ȵ�ԭ���ǣ����Ԫ�ر�ascii�룬˭�ȴ�˭ʤ��
3.��ȡ�ַ��� cin.getline(str1, number); //���ַ���str1��ȡnumber-1���ַ��������һ����\0
              getline(cin, str1); //��������cin��ֵ��str1
4.����ַ��� str.append(temp);   //��temp��ӵ�str��
5.�����ַ��� str.find(temp);     //����str����û��temp��temp����Ҫ��ǰ��ֵ����û�з���ֵ==string::npos (��-1)
6.д��ϣ�Ҫ���cin.get()        //����console����̨һ������

str="\n";//�����ʹ��cinϵ�к���getline()Ҫ������䣬���س�����Ϊ������cin��������棬������������Ļ����ڿ���̨�ϾͲ������getline()��������ʾ����ֱ����������Ϊ����Ĭ�ϵؽ�֮ǰ�ı�����Ϊ��������
getline(cin,mystr);
**/
