namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    {
        char * data = *dataPtr1;
        data = VAR1;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
