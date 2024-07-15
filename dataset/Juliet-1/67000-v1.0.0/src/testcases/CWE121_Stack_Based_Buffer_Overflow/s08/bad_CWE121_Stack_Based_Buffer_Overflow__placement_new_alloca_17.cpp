namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    for(i = 0; i < 1; i++)
    {
        data = VAR1;
    }
    for(j = 0; j < 1; j++)
    {
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
<START>
            classTwo->intTwo = 10; 
<END>
            printIntLine(classTwo->intOne);
        }
    }
}
} 
