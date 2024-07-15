using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap);
void FUN1()
{
    char * data;
    map<int, char *> dataMap;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR2;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, char *> dataMap);
void FUN3()
{
    char * data;
    map<int, char *> dataMap;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR1;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap)
{
    char * data = dataMap[2];
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
}
void FUN2(map<int, char *> dataMap)
{
    char * data = dataMap[2];
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
}
} 
