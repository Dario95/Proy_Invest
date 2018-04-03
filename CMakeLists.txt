project      (hmi_remoto)

CMAKE_MINIMUM_REQUIRED(VERSION 2.4)

if(COMMAND cmake_policy)
	cmake_policy(SET CMP0003 OLD)
	cmake_policy(SET CMP0015 OLD)
endif(COMMAND cmake_policy)

SET(EXECUTABLE_OUTPUT_PATH ".")
set (CMAKE_BUILD_TYPE  DEBUG)
SET(VERSION_REQ_OCV "3.1")

#Librerias BOOST
set(Boost_USE_STATIC_LIBS ON) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME ON) 
set (CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")

find_package (Qt4 REQUIRED)
find_package (VTK REQUIRED)
find_package (PCL 1.7.1 REQUIRED)
find_package(Boost 1.45.0 COMPONENTS filesystem regex) 
find_package(OpenMP)
find_package(OpenCV ${VERSION_REQ_OCV} REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${Boost_INCLUDE_DIRS}) 
include_directories(${CMAKE_BINARY_DIR})
include_directories(
    ${CUDA_INCLUDE_DIRS}
    /home/jona/Desktop/Proy_Homero/Proy_Invest/darknet/src
    /home/jona/Desktop/Proy_Homero/Proy_Invest/darknet/include
)

link_directories    (${PCL_LIBRARY_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
link_directories(
    /usr/local/cuda/lib
    /usr/local/cuda/lib64
    /home/jona/Desktop/Proy_Homero/Proy_Invest/darknet
)
add_definitions     (${PCL_DEFINITIONS})

set  (project_SOURCES main.cpp mainwindow.cpp v_visualizador.cpp threadcliente.cpp v_autores11.cpp darknet_wrapper/wrapper_cpp.cpp)
set  (project_HEADERS mainwindow.h v_visualizador.h threadcliente.h v_autores11.h darknet_wrapper/wrapper_cpp.h darknet_wrapper/box.h)
set  (project_FORMS   mainwindow.ui v_visualizador.ui v_autores11.ui)
set  (project_RESOURCES imagenes.qrc)

set  (VTK_LIBRARIES   vtkRendering vtkGraphics vtkHybrid QVTK)
SET( QT_USE_PHONON TRUE )

QT4_ADD_RESOURCES( RES_SOURCES ${project_RESOURCES} )
QT4_WRAP_UI  (project_FORMS_HEADERS ${project_FORMS})
QT4_WRAP_CPP (project_HEADERS_MOC   ${project_HEADERS})


INCLUDE         (${QT_USE_FILE})
ADD_DEFINITIONS (${QT_DEFINITIONS})
add_definitions(-std=c++14 -g -O3)

ADD_EXECUTABLE  (hmi_remoto ${project_SOURCES} ${project_FORMS_HEADERS} ${project_HEADERS_MOC} ${RES_SOURCES}
darknet_wrapper/wrapper_cpp.cpp
        darknet_wrapper/wrapper_cpp.h
        darknet/src/wrapper_c.h
)


#target_link_libraries(main ${OpenCV_LIBS} cuda cudart cublas curand darknet)

TARGET_LINK_LIBRARIES (hmi_remoto ${LINUX_LIBRARIES} ${Boost_LIBRARIES} ${QT_LIBRARIES} ${PCL_LIBRARIES} ${VTK_LIBRARIES} ${Boost_LIBRARIES} ${OpenCV_LIBS} cuda cudart cublas curand darknet)

