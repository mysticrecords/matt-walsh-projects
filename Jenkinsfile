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
                  cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/test
                  ctest -C unit_tests
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