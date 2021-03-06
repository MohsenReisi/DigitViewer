/* YCDFileWriter.h - .ycd Writer Object
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 07/28/2013
 * Last Modified    : 07/29/2013
 * 
 * 
 *  This class represents a file handle to a single .ycd file. When constructed,
 *  it creates a .ycd, writes the header, and handles all digit writes to it.
 * 
 *  Note that this writer class only accepts raw input. There is no option to
 *  let it accept plain-text input. This is because the "CVN" module does not
 *  have support for plain-text -> compressed conversions.
 * 
 */

#pragma once
#ifndef _ycr_YCDFileWriter_H
#define _ycr_YCDFileWriter_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "DigitWriter.h"
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
namespace DigitViewer{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define YC_DIGITWRITER_MAX_DIGIT_WIDTH     20
class YCDFileWriter{
public:
    //  Movable
    YCDFileWriter();
    YCDFileWriter(YCDFileWriter &&);
    void operator=(YCDFileWriter &&);
    ~YCDFileWriter();
private:
    //  But not copyable
    YCDFileWriter(const YCDFileWriter &);
    void operator=(const YCDFileWriter &);

public:

    //  Create a new writer
    YCDFileWriter(
        std::wstring path,
        const std::string& first_digits,
        uiL_t digits_per_file,
        uiL_t fileid = 0,
        int radix = 10
    );

    void close();

    upL_t write_chars(
        const char* str, upL_t digits,
        u64_t* buffer, upL_t buffer_L
    );

    bool isValid() const;

private:
    std::wstring path;
    FileIO::BasicFile file;

    int radix;                          //  Radix of the digits. (10 or 16)
    upL_t digits_per_word;
    void (*fp_convert)(u64_t*, const char*, upL_t);

    ufL_t words_per_file;
    ufL_t digits_per_file;
    uiL_t file_id;

    //  File offset of where the "total_digits" field is.
    //  This is needed because this value isn't determined until the file is
    //  closed. That's when the value is written. So we need to know where to
    //  seek back to. This is also the reason why this is the only zero-padded
    //  field in the compressed digit format.
    uiL_t offset_total_digits;

    ufL_t pos_word;         //  Current words written (and flushed) to the file.
    ufL_t pos_char;         //  Current digits written to the file. (including unflushed digits)
    char str_buffer[20];    //  Buffer to handle end points.
    upL_t buffered;         //  # of digits in the buffer.

    void write_words(u64_t* T, upL_t L);
    void flush();

};
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
#endif
