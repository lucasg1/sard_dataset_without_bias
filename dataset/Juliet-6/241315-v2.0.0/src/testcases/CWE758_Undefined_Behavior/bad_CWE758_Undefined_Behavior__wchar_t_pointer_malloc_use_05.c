static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
            if (pointer == NULL) {exit(-1);}
<START>
            wchar_t * data = *pointer; 
<END>
            free(pointer);
            printWLine(data);
        }
    }
}
