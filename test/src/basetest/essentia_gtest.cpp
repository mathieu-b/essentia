
#include "essentia_gtest.h"

namespace essentia {
  
  // Default essentia values
  std::string TestPaths::_file_output_file_path = "build/test/fileoutput.txt";
  std::string TestPaths::_recorded_audio_files_base_path = "test/audio/recorded/";
  
  void TestPaths::setFileOutputFilePath(std::string filepath)
  {
    _file_output_file_path = filepath;
  }
  const std::string TestPaths::getFileOutputFilePath()
  {
    return _file_output_file_path;
  }
  
  void TestPaths::setRecordedAudioFilesBasePath(std::string filepath)
  {
    _recorded_audio_files_base_path = filepath;
  }
  const std::string TestPaths::getRecordedAudioFilesBasePath()
  {
    return _recorded_audio_files_base_path;
  }
  
};
