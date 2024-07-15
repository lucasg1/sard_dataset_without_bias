namespace NAMESPACE0
{
static int VAR1 = 0;
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
void FUN1()
{
    char * data;
    char * VAR2 = (char *)malloc(sizeof(OneIntClass));
    if (VAR2 == NULL) {exit(-1);}
    char * VAR3 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR3 == NULL) {exit(-1);}
    data = VAR2;
    VAR1 = 1; 
    FUN0(data);
}
} 
