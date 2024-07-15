static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            twoIntsStruct * data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
            if (data == NULL) {exit(-1);}
            data[0].intOne = 0;
            data[0].intTwo = 0;
            printStructLine(&data[0]);
<START>
            data = (twoIntsStruct *)realloc(data, (130000)*sizeof(twoIntsStruct));
<END>
            if (data != NULL)
            {
                data[0].intOne = 1;
                data[0].intTwo = 1;
                printStructLine(&data[0]);
                free(data);
            }
        }
    }
}
