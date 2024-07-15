namespace NAMESPACE0
{
void FUN0(char * data)
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
void FUN1()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    data = VAR1;
    FUN0(data);
}
} 
