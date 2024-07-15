static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(staticTrue)
    {
        free(data);
    }
}
