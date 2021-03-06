#include "FileException.h"

FileException::FileException(const char* error) : 
  m_error(error) 
{
}

// エラーの状況を出力する関数
const char* FileException::What() const {
  return m_error.c_str();
}

OpenFileException::OpenFileException(const char* filename) :
  FileException("ファイルを開けませんでした！") 
{
  m_error += "\nファイル名: ";
  m_error += filename;
}

ReadFileException::ReadFileException() :
  FileException("ファイルから読み込めませんでした！") 
{
}
