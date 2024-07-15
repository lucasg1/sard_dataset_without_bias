using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    switch(6)
    {
    case 6:
        data.push_back(100);
        data.push_back(0);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            if (!*i)
            {
                data.clear();
            }
<START>
            cout << " " << *i;
<END>
        }
        cout << endl;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
