// Declarative //
//   pipeline {
// agent any
//       stages {
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

        ctest arguments: 'test', installation: 'cmake', label: 'cmake', workingDir: '/Unit_Test_Example/build/test/'
        
        // workspace = env.WORKSPACE
        // echo "Current workspace is ${env.WORKSPACE}"

        // dir("/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example") {
        //     sh "cmake --build build"
        // }
        // dir("/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example/build/test/")  {
        //     sh "ctest"
        // }

      }
      stage('Deploy') {
          echo 'Deploying....'
} }