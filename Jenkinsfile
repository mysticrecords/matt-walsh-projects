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
                  sh './Unit_Test_Example/unittests.sh'
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
      }
      stage('Deploy') {
          echo 'Deploying....'
} }