// Declarative //
  pipeline {
agent any
      stages {
          stage('Build') {
              steps {
                  echo 'Building..'
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
  node {
      stage('Build') {
          echo 'Building....'
          
      }
      stage('Test') {
          echo 'Building....'
           sh './Unit_Test_Example/unittests.sh'
      }
      stage('Deploy') {
          echo 'Deploying....'
} }