using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    list<int>  data;
    for(i = 0; i < 1; i++)
    {
        data.push_back(100);
        data.push_back(0);
    }
    for(k = 0; k < 1; k++)
    {
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
void FUN1()
{
    int h,j;
    list<int>  data;
    for(h = 0; h < 1; h++)
    {
        data.push_back(100);
        data.push_back(200);
    }
    for(j = 0; j < 1; j++)
    {
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
}
} 
