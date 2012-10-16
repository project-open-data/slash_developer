/developer
==========

The slash_developer module provides a set of features to create an online directory of APIs.

Under the Federal Digital Government Strategy, every agency is required to provide a /developer page that:

1. lists every available API for an agency, with basic information on how to access it
1. provides a machine readable catalog of these APIs

## Install Instructions

### Install dependencies

The slash_developer module requires the following modules be installed:

1. ctools
1. features
1. entity_reference
1. libraries
1. strongarm

### Install the module

Clone the repo into your site/all/modules folder (or whever you store contrib modules)

```
> git clone https://github.com/project-open-data/slash_developer.git
```

Navigate to the Drupal admin module page and install the module.

## Usage

Once the module is installed, you can navigate to /developer.  You should see a blank page, but not a 404.

First thing, you'll want to populate a set of APIs to be displayed at /developer.

To do this, go to the Content > Create menu in the Drupal admin and create a new instance of the 'Developer API' 
type.  You'll be asked to enter a Title, Description, Endpoint URL and link to the relevant Terms of Service.

## Best Practices

For a list of best practices when creating API documentation and /developer sections generally, check out the wiki at:
https://github.com/project-open-data/slash_developer/wiki
