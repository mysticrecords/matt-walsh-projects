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
        

        dir("/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example") {
            // sh "cmake --build build"
            sh "ls -la"
        }
        dir("/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example/build/test/")  {
            // sh "ctest"
        }

      }
      stage('Deploy') {
          echo 'Deploying....'
} }