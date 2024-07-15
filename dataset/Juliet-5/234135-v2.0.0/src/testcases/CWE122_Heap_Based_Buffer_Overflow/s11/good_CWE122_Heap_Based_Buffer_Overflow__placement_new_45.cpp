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
        free(data);
    }
}
void FUN1()
{
    char * data;
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    if (VAR4 == NULL) {exit(-1);}
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR5 == NULL) {exit(-1);}
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
        free(data);
    }
}
void FUN3()
{
    char * data;
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    if (VAR4 == NULL) {exit(-1);}
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR5 == NULL) {exit(-1);}
    data = VAR4;
    VAR3 = data;
    FUN2();
}
} 
