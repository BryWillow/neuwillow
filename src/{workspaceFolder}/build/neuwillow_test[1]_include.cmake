if(EXISTS "/Users/bryancamp/SoftwareDevelopment/cpp/neuWillow/src/{workspaceFolder}/build/neuwillow_test[1]_tests.cmake")
  include("/Users/bryancamp/SoftwareDevelopment/cpp/neuWillow/src/{workspaceFolder}/build/neuwillow_test[1]_tests.cmake")
else()
  add_test(neuwillow_test_NOT_BUILT neuwillow_test_NOT_BUILT)
endif()