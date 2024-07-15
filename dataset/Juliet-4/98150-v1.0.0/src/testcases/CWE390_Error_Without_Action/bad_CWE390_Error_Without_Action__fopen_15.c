void FUN0()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
