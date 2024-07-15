namespace NAMESPACE0
{
void FUN0(char * * data);
void FUN1()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    data = VAR2;
    FUN0(&data);
}
void FUN2(char * * data);
void FUN3()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    data = VAR1;
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
    }
}
void FUN2(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
    }
}
} 
