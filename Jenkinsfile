// Declarative //
//   pipeline {
// agent any
//       stages {
//         stage('run CMake')
// {
//      def cmakePath = tool 'CMake'
//      bat """
//      mkdir build
//      cd build
//      ${cmakePath}\\cmake -DBOOST_ROOT=...
//      """
// }
//           stage('Build') {
//               steps {
//                   echo 'Building..'
// } }
//           stage('Test') {
//               steps {
                
//                   echo 'Testing..'
//               }
//           }
//           stage('Deploy') {
//               steps {
//                   echo 'Deploying....'
// } }
// } }
  // Script //
    node {
      stage('Build') {
          echo 'Building....'
          
      }
      stage('Test') {


ctest arguments: 'unittests', installation: 'cmake', label: 'cmake', workingDir: '/Unit_Test_Example/build/test'
      cmakeBuild buildDir: 'build', generator: 'Ninja', installation: 'cmake', label: 'build cmake', sourceDir: '/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example'



        // dir("/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example") {


        //     sh "cmake --build build"

        //     sh "ls -la"
        // }
        // dir("/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example/build/test/")  {
        //     // sh "ctest"
        //     sh "ls -la"
        // }

      }
      stage('Deploy') {
          echo 'Deploying....'
} }