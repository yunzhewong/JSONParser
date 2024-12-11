enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(JSONParser_test ../src/JSONObject.cpp ../src/JSONString.cpp JSONObject_test.cpp JSONString_test.cpp)

target_link_libraries(JSONParser_test gtest_main)

add_test(NAME JSONParser_test COMMAND JSONParser_test)