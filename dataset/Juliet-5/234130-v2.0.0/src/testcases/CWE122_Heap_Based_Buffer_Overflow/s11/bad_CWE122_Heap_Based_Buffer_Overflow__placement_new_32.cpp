namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
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
            free(data);
        }
    }
}
} 
