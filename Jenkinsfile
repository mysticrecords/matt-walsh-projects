Declarative //
  pipeline {
agent any
      stages {
          stage('Build') {
              steps {
                  echo 'Building..'
} }
          stage('Test') {
              steps {
                
                dir(Unit_Test_Example) {
            

        sh "./Unit_Test_Example/unittests.sh"
        }
              }
          }
          stage('Deploy') {
              steps {
                  echo 'Deploying....'
} }
} }
//   // Script //
//     node {
//       stage('Build') {
//           echo 'Building....'
          
//       }
//       stage('Test') {
        
//         workspace = env.WORKSPACE
//         echo "Current workspace is ${env.WORKSPACE}"

//       }
//       stage('Deploy') {
//           echo 'Deploying....'
// } }