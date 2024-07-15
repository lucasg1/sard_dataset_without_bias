namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        delete [] data;
<END>
    }
}
} 
