void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        RENAME(OLD_BAD_FILE_NAME, L"newbadfilename.txt");
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
