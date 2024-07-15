namespace NAMESPACE0
{
char * VAR1;
char * VAR2;
char * VAR3;
void FUN0();
void FUN1()
{
    char * data;
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR4;
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern char * VAR1;
extern char * VAR2;
extern char * VAR3;
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
} 
