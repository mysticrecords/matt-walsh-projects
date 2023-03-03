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
      
      ctest arguments: 'ctest', installation: 'cmake', label: 'cmake', workingDir: '/Unit_Test_Example/build/test/'

      }
      stage('Deploy') {
          echo 'Deploying....'
} }