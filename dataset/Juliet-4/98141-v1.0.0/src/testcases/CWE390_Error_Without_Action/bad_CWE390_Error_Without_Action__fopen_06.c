static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
