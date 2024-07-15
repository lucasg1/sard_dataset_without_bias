namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
    if(GLOBAL_CONST_TRUE)
    {
        data = VAR1;
    }
    if(GLOBAL_CONST_TRUE)
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
