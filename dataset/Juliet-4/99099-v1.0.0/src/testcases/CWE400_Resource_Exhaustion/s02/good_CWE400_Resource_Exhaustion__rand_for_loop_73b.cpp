using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> countList);
void FUN1()
{
    int count;
    list<int> countList;
    count = -1;
    count = 20;
    countList.push_back(count);
    countList.push_back(count);
    countList.push_back(count);
    FUN0(countList);
}
void FUN2(list<int> countList);
void FUN3()
{
    int count;
    list<int> countList;
    count = -1;
    count = RAND32();
    countList.push_back(count);
    countList.push_back(count);
    countList.push_back(count);
    FUN2(countList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> countList)
{
    int count = countList.back();
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN2(list<int> countList)
{
    int count = countList.back();
    {
        size_t i = 0;
        if (count > 0 && count <= 20)
        {
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
} 
