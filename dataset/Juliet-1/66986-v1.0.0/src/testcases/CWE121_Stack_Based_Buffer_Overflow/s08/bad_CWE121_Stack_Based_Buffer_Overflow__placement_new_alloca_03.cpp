namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    if(5==5)
    {
        data = VAR1;
    }
    if(5==5)
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
