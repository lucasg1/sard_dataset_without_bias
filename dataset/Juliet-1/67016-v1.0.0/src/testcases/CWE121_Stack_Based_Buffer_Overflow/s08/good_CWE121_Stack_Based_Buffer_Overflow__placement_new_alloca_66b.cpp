namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char * dataArray[]);
void FUN3()
{
    char * data;
    char * dataArray[5];
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR1;
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
    }
}
void FUN2(char * dataArray[])
{
    char * data = dataArray[2];
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
    }
}
} 
