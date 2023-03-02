  node {
      stage('Build') {
          echo 'Building....'
          
      }
      stage('Test') {
        
        workspace = env.WORKSPACE
        echo "Current workspace is ${env.WORKSPACE}"

        sh '/Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example'
        
        sh './Unit_Test_Example/unittests.sh'
      }
      stage('Deploy') {
          echo 'Deploying....'
} }