Declarative //
  pipeline {
agent any
      stages {
          stage('Build') {
              steps {
                  echo 'Building..'
                  script {
            def directories = getDirectories("$WORKSPACE")
            echo "$directories"
        }
} }
          stage('Test') {
              steps {
                
                  echo 'Testing..'
              }
          }
          stage('Deploy') {
              steps {
                  echo 'Deploying....'
} }
} }
  // Script //
//   node {
//       stage('Build') {
//           echo 'Building....'
//           sh 'ctest --version'

          
//       }
//       stage('Test') {
        
//         workspace = env.WORKSPACE
//         echo "Current workspace is ${env.WORKSPACE}"

//         sh 'cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example'
        
//         sh './unittests.sh'
//       }
//       stage('Deploy') {
//           echo 'Deploying....'
// } }