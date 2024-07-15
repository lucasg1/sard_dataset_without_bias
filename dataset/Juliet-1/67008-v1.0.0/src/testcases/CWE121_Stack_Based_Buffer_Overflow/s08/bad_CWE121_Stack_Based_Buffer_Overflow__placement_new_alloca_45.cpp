namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
static char * VAR3;
void FUN0()
{
    char * data = VAR1;
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
<START>
        classTwo->intTwo = 10; 
<END>
        printIntLine(classTwo->intOne);
    }
}
void FUN1()
{
    char * data;
    char * VAR4 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR5 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR4;
    VAR1 = data;
    FUN0();
}
} 
