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
          checkout scm 1
        /* .. snip .. */
      }
      stage('Test') {
          echo 'Building....'
      }
      stage('Deploy') {
          echo 'Deploying....'
} }