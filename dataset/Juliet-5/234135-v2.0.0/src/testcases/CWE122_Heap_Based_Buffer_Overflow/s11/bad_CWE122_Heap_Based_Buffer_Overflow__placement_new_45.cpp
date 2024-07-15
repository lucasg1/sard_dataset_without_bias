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
    data = VAR4;
    VAR1 = data;
    FUN0();
}
} 
