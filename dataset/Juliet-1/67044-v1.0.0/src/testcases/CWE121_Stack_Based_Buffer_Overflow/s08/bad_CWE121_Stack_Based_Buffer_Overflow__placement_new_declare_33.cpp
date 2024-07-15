namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    data = VAR1;
    {
        char * data = dataRef;
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
