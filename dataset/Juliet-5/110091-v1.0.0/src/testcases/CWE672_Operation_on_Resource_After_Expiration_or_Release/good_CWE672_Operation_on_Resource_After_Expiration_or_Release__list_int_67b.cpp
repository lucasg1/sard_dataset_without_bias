using namespace std;
namespace NAMESPACE0
{
typedef struct _structType
{
    list<int>  structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    list<int>  data;
    structType myStruct;
    data.push_back(100);
    data.push_back(200);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    list<int>  data;
    structType myStruct;
    data.push_back(100);
    data.push_back(0);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
} 
using namespace std;
namespace NAMESPACE0
{
typedef struct _structType
{
    list<int>  structFirst;
} structType;
void FUN0(structType myStruct)
{
    list<int>  data = myStruct.structFirst;
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            if (!*i)
            {
                data.clear();
            }
            cout << " " << *i;
        }
        cout << endl;
    }
}
void FUN2(structType myStruct)
{
    list<int>  data = myStruct.structFirst;
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
    }
}
} 
