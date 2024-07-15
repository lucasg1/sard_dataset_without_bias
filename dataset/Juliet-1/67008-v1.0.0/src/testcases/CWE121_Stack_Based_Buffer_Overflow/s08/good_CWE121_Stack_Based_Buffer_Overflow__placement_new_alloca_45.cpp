namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
static char * VAR3;
void FUN0()
{
    char * data = VAR2;
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
    }
}
void FUN1()
{
    char * data;
    char * VAR4 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR5 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR5;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR3;
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
    }
}
void FUN3()
{
    char * data;
    char * VAR4 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR5 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR4;
    VAR3 = data;
    FUN2();
}
} 
