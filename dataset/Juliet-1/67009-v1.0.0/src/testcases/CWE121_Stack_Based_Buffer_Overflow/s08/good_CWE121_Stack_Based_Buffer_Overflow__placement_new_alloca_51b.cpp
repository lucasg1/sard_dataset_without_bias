namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data);
void FUN2()
{
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR2;
    FUN0(data);
}
void FUN3()
{
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR1;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
    }
}
void FUN1(char * data)
{
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
    }
}
} 
