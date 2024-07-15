namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    char * VAR2 = (char *)malloc(sizeof(OneIntClass));
    char * VAR3 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR2;
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(char * data)
{
    if(VAR1)
    {
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
} 
