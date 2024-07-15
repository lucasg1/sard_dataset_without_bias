static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            FILE * fileDesc = NULL;
            fileDesc = fopen("file.txt", "w+");
            if (fileDesc == NULL)
            {
<START>
            }
<END>
            fclose(fileDesc);
        }
    }
}
