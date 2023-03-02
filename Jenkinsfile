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
        
        workspace = env.WORKSPACE
        echo "Current workspace is ${env.WORKSPACE}"

        sh 'cd /Unit_Test_Example'
        
        sh './unittests.sh'
      }
      stage('Deploy') {
          echo 'Deploying....'
} }