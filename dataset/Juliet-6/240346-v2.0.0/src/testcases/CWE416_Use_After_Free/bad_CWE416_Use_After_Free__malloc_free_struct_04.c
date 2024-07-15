static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        printStructLine(&data[0]);
<END>
    }
}
