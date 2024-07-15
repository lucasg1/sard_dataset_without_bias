using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList);
void FUN1()
{
    char * data;
    list<char *> dataList;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR2;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<char *> dataList);
void FUN3()
{
    char * data;
    list<char *> dataList;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR1;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList)
{
    char * data = dataList.back();
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
}
void FUN2(list<char *> dataList)
{
    char * data = dataList.back();
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
}
} 
